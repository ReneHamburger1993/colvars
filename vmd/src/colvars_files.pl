# List of files for the Colvars module

our ( $colvars_defines );

our ( @colvars_cc );
our ( @colvars_cu );
our ( @colvars_ccpp );
our ( @colvars_h );

$colvars_defines = " -DVMDCOLVARS";

@colvars_cc      = ();
@colvars_cu      = ();
@colvars_ccpp    = ('colvaratoms.C',
                    'colvarbias.C',
                    'colvarbias_abf.C',
                    'colvarbias_alb.C',
                    'colvarbias_histogram.C',
                    'colvarbias_meta.C',
                    'colvarbias_restraint.C',
                    'colvar.C',
                    'colvarcomp.C',
                    'colvarcomp_angles.C',
                    'colvarcomp_apath.C',
                    'colvarcomp_coordnums.C',
                    'colvarcomp_distances.C',
                    'colvarcomp_gpath.C',
                    'colvarcomp_protein.C',
                    'colvarcomp_rotations.C',
                    'colvardeps.C',
                    'colvargrid.C',
                    'colvarmodule.C',
                    'colvarparams.C',
                    'colvarparse.C',
                    'colvarproxy.C',
                    'colvarproxy_replicas.C',
                    'colvarproxy_tcl.C',
                    'colvarproxy_vmd.C',
                    'colvarscript.C',
                    'colvarscript_commands.C',
                    'colvarscript_commands_bias.C',
                    'colvarscript_commands_colvar.C',
                    'colvartypes.C',
                    'colvarvalue.C');
@colvars_h    =    ('colvar_UIestimator.h',
                    'colvar_arithmeticpath.h',
                    'colvar_geometricpath.h',
                    'colvaratoms.h',
                    'colvarbias.h',
                    'colvarbias_abf.h',
                    'colvarbias_alb.h',
                    'colvarbias_histogram.h',
                    'colvarbias_meta.h',
                    'colvarbias_restraint.h',
                    'colvarcomp.h',
                    'colvardeps.h',
                    'colvargrid.h',
                    'colvar.h',
                    'colvarmodule.h',
                    'colvarparams.h',
                    'colvarparse.h',
                    'colvarproxy.h',
                    'colvarproxy_tcl.h',
                    'colvarproxy_vmd.h',
                    'colvarscript.h',
                    'colvarscript_commands.h',
                    'colvarscript_commands_bias.h',
                    'colvarscript_commands_colvar.h',
                    'colvars_version.h',
                    'colvartypes.h',
                    'colvarvalue.h');
