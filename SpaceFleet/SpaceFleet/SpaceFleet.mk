##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SpaceFleet
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet
ProjectPath            :=C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Małgorzata
Date                   :=29/03/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SpaceFleet.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/test2.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_tests_test3.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_tests_test5.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_tests_test6.cpp$(ObjectSuffix) $(IntermediateDirectory)/test1.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_tests_test7.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Fleet.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ship.cpp$(ObjectSuffix) $(IntermediateDirectory)/Menu.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_tests_test4.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix) $(IntermediateDirectory)/Combat.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Unit.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arsenal.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/test2.cpp$(ObjectSuffix): test2.cpp $(IntermediateDirectory)/test2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/test2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test2.cpp$(DependSuffix): test2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/test2.cpp$(DependSuffix) -MM test2.cpp

$(IntermediateDirectory)/test2.cpp$(PreprocessSuffix): test2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test2.cpp$(PreprocessSuffix) test2.cpp

$(IntermediateDirectory)/src_tests_test3.cpp$(ObjectSuffix): src/tests/test3.cpp $(IntermediateDirectory)/src_tests_test3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/tests/test3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_tests_test3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_tests_test3.cpp$(DependSuffix): src/tests/test3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_tests_test3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_tests_test3.cpp$(DependSuffix) -MM src/tests/test3.cpp

$(IntermediateDirectory)/src_tests_test3.cpp$(PreprocessSuffix): src/tests/test3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_tests_test3.cpp$(PreprocessSuffix) src/tests/test3.cpp

$(IntermediateDirectory)/src_tests_test5.cpp$(ObjectSuffix): src/tests/test5.cpp $(IntermediateDirectory)/src_tests_test5.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/tests/test5.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_tests_test5.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_tests_test5.cpp$(DependSuffix): src/tests/test5.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_tests_test5.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_tests_test5.cpp$(DependSuffix) -MM src/tests/test5.cpp

$(IntermediateDirectory)/src_tests_test5.cpp$(PreprocessSuffix): src/tests/test5.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_tests_test5.cpp$(PreprocessSuffix) src/tests/test5.cpp

$(IntermediateDirectory)/src_tests_test6.cpp$(ObjectSuffix): src/tests/test6.cpp $(IntermediateDirectory)/src_tests_test6.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/tests/test6.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_tests_test6.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_tests_test6.cpp$(DependSuffix): src/tests/test6.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_tests_test6.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_tests_test6.cpp$(DependSuffix) -MM src/tests/test6.cpp

$(IntermediateDirectory)/src_tests_test6.cpp$(PreprocessSuffix): src/tests/test6.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_tests_test6.cpp$(PreprocessSuffix) src/tests/test6.cpp

$(IntermediateDirectory)/test1.cpp$(ObjectSuffix): test1.cpp $(IntermediateDirectory)/test1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/test1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test1.cpp$(DependSuffix): test1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/test1.cpp$(DependSuffix) -MM test1.cpp

$(IntermediateDirectory)/test1.cpp$(PreprocessSuffix): test1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test1.cpp$(PreprocessSuffix) test1.cpp

$(IntermediateDirectory)/src_tests_test7.cpp$(ObjectSuffix): src/tests/test7.cpp $(IntermediateDirectory)/src_tests_test7.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/tests/test7.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_tests_test7.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_tests_test7.cpp$(DependSuffix): src/tests/test7.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_tests_test7.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_tests_test7.cpp$(DependSuffix) -MM src/tests/test7.cpp

$(IntermediateDirectory)/src_tests_test7.cpp$(PreprocessSuffix): src/tests/test7.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_tests_test7.cpp$(PreprocessSuffix) src/tests/test7.cpp

$(IntermediateDirectory)/src_Fleet.cpp$(ObjectSuffix): src/Fleet.cpp $(IntermediateDirectory)/src_Fleet.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/Fleet.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Fleet.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Fleet.cpp$(DependSuffix): src/Fleet.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Fleet.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Fleet.cpp$(DependSuffix) -MM src/Fleet.cpp

$(IntermediateDirectory)/src_Fleet.cpp$(PreprocessSuffix): src/Fleet.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Fleet.cpp$(PreprocessSuffix) src/Fleet.cpp

$(IntermediateDirectory)/Ship.cpp$(ObjectSuffix): Ship.cpp $(IntermediateDirectory)/Ship.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Ship.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ship.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ship.cpp$(DependSuffix): Ship.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ship.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ship.cpp$(DependSuffix) -MM Ship.cpp

$(IntermediateDirectory)/Ship.cpp$(PreprocessSuffix): Ship.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ship.cpp$(PreprocessSuffix) Ship.cpp

$(IntermediateDirectory)/Menu.cpp$(ObjectSuffix): Menu.cpp $(IntermediateDirectory)/Menu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Menu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Menu.cpp$(DependSuffix): Menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Menu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Menu.cpp$(DependSuffix) -MM Menu.cpp

$(IntermediateDirectory)/Menu.cpp$(PreprocessSuffix): Menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Menu.cpp$(PreprocessSuffix) Menu.cpp

$(IntermediateDirectory)/src_tests_test4.cpp$(ObjectSuffix): src/tests/test4.cpp $(IntermediateDirectory)/src_tests_test4.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/tests/test4.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_tests_test4.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_tests_test4.cpp$(DependSuffix): src/tests/test4.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_tests_test4.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_tests_test4.cpp$(DependSuffix) -MM src/tests/test4.cpp

$(IntermediateDirectory)/src_tests_test4.cpp$(PreprocessSuffix): src/tests/test4.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_tests_test4.cpp$(PreprocessSuffix) src/tests/test4.cpp

$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix): src/main.cpp $(IntermediateDirectory)/src_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/src/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.cpp$(DependSuffix): src/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_main.cpp$(DependSuffix) -MM src/main.cpp

$(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix): src/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix) src/main.cpp

$(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix): Weapon.cpp $(IntermediateDirectory)/Weapon.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Weapon.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Weapon.cpp$(DependSuffix): Weapon.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Weapon.cpp$(DependSuffix) -MM Weapon.cpp

$(IntermediateDirectory)/Weapon.cpp$(PreprocessSuffix): Weapon.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Weapon.cpp$(PreprocessSuffix) Weapon.cpp

$(IntermediateDirectory)/Combat.cpp$(ObjectSuffix): Combat.cpp $(IntermediateDirectory)/Combat.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Combat.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Combat.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Combat.cpp$(DependSuffix): Combat.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Combat.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Combat.cpp$(DependSuffix) -MM Combat.cpp

$(IntermediateDirectory)/Combat.cpp$(PreprocessSuffix): Combat.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Combat.cpp$(PreprocessSuffix) Combat.cpp

$(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix): Cargo.cpp $(IntermediateDirectory)/Cargo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Cargo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cargo.cpp$(DependSuffix): Cargo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cargo.cpp$(DependSuffix) -MM Cargo.cpp

$(IntermediateDirectory)/Cargo.cpp$(PreprocessSuffix): Cargo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cargo.cpp$(PreprocessSuffix) Cargo.cpp

$(IntermediateDirectory)/Unit.cpp$(ObjectSuffix): Unit.cpp $(IntermediateDirectory)/Unit.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Unit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Unit.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Unit.cpp$(DependSuffix): Unit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Unit.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Unit.cpp$(DependSuffix) -MM Unit.cpp

$(IntermediateDirectory)/Unit.cpp$(PreprocessSuffix): Unit.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Unit.cpp$(PreprocessSuffix) Unit.cpp

$(IntermediateDirectory)/Arsenal.cpp$(ObjectSuffix): Arsenal.cpp $(IntermediateDirectory)/Arsenal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Arsenal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arsenal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arsenal.cpp$(DependSuffix): Arsenal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arsenal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arsenal.cpp$(DependSuffix) -MM Arsenal.cpp

$(IntermediateDirectory)/Arsenal.cpp$(PreprocessSuffix): Arsenal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arsenal.cpp$(PreprocessSuffix) Arsenal.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


