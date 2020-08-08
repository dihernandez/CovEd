import to_import as exModule
import different_folder.to_import_hierarchy as hierarchy

my_inst = exModule.ToImport()
my_inst.set_val(9)
my_inst.print_val()

my_h_inst = hierarchy.ToImportHierarchy()

my_h_inst.print_val()
