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
Date                   :=19/03/2018
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
Objects0=$(IntermediateDirectory)/fun.cpp$(ObjectSuffix) $(IntermediateDirectory)/test1.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ship.cpp$(ObjectSuffix) $(IntermediateDirectory)/Unit.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/fun.cpp$(ObjectSuffix): fun.cpp $(IntermediateDirectory)/fun.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/fun.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/fun.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/fun.cpp$(DependSuffix): fun.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/fun.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/fun.cpp$(DependSuffix) -MM fun.cpp

$(IntermediateDirectory)/fun.cpp$(PreprocessSuffix): fun.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/fun.cpp$(PreprocessSuffix) fun.cpp

$(IntermediateDirectory)/test1.cpp$(ObjectSuffix): test1.cpp $(IntermediateDirectory)/test1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/test1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test1.cpp$(DependSuffix): test1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/test1.cpp$(DependSuffix) -MM test1.cpp

$(IntermediateDirectory)/test1.cpp$(PreprocessSuffix): test1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test1.cpp$(PreprocessSuffix) test1.cpp

$(IntermediateDirectory)/Ship.cpp$(ObjectSuffix): Ship.cpp $(IntermediateDirectory)/Ship.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Ship.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ship.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ship.cpp$(DependSuffix): Ship.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ship.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ship.cpp$(DependSuffix) -MM Ship.cpp

$(IntermediateDirectory)/Ship.cpp$(PreprocessSuffix): Ship.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ship.cpp$(PreprocessSuffix) Ship.cpp

$(IntermediateDirectory)/Unit.cpp$(ObjectSuffix): Unit.cpp $(IntermediateDirectory)/Unit.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Unit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Unit.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Unit.cpp$(DependSuffix): Unit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Unit.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Unit.cpp$(DependSuffix) -MM Unit.cpp

$(IntermediateDirectory)/Unit.cpp$(PreprocessSuffix): Unit.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Unit.cpp$(PreprocessSuffix) Unit.cpp

$(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix): Cargo.cpp $(IntermediateDirectory)/Cargo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Public/Documents/PROI/PROI_1.0/SpaceFleet/SpaceFleet/Cargo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cargo.cpp$(DependSuffix): Cargo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cargo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cargo.cpp$(DependSuffix) -MM Cargo.cpp

$(IntermediateDirectory)/Cargo.cpp$(PreprocessSuffix): Cargo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cargo.cpp$(PreprocessSuffix) Cargo.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


