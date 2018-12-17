// -*- c++ -*-

#ifndef COLVARCOMP_DEER_H
#define COLVARCOMP_DEER_H


class colvar;

/// \brief DEER time-signal colvar component
/// (Marinelli and Fiorin, Structure, 2018)
class colvar::deer_kernel
  : public colvar::cvc
{
protected:

  /// Compute the kernel's value at a single time point t
  double kdeer(cvm::real const &r, cvm::real const &t);
  /// Compute the kernel's derivative at a single time point t
  double kdeer_der(cvm::real const &r, cvm::real const &t);

  /// Compute kernel over 
  template<bool gradients> 
  int compute_deer_kernel(cvm::vector1d<cvm::real> &kernel,
                          cvm::vector1d<cvm::real> &kernel_deriv,
                          cvm::vector1d<cvm::real> const &times);

  /// Derivative of the DEER kernels/signal wrt the group-distance
  cvm::vector1d<cvm::real> deer_deriv;

  /// deer time trace file
  std::string deer_time_file;
  /// size of deer file
  int deersize;
  /// times vector
  cvm::vector1d<cvm::real> timesdeer;
  /// experimental deer values
  cvm::vector1d<cvm::real> deerexpvalues;

  /// Use analytical derivatives
  bool deer_anal_der;

  /// Use discretized/tabulated function
  bool deer_grid;
  /// width for deer grid
  cvm::real deerwidth;
  /// lower boundary for deer grid
  cvm::real deerlower;
  /// upper boundary for deer grid
  cvm::real deerupper;
  /// number of points in discretized deer kernel function
  int rpoints;
  /// discretized deer kernel function
  cvm::matrix2d<cvm::real> deerk;
  /// discretized deer kernel derivatives function
  cvm::matrix2d<cvm::real> deerk_der;

  /// First atom group
  cvm::atom_group *group1;
  /// Second atom group
  cvm::atom_group *group2;
  /// Vector distance, cached to be recycled
  cvm::rvector dist_v;

public:

  deer_kernel(std::string const &conf);
  deer_kernel();
  virtual int init(std::string const &conf);
  virtual ~deer_kernel() {}
  virtual void calc_value();
  virtual void calc_gradients();
  virtual void apply_force(colvarvalue const &force);
  virtual cvm::real dist2(colvarvalue const &x1,
                          colvarvalue const &x2) const;
  virtual colvarvalue dist2_lgrad(colvarvalue const &x1,
                                  colvarvalue const &x2) const;
  virtual colvarvalue dist2_rgrad(colvarvalue const &x1,
                                  colvarvalue const &x2) const;
};


#endif
