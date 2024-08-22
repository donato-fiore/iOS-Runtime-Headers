// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUPROCESSDESCRIPTION_H
#define VMUPROCESSDESCRIPTION_H

@class NSString, NSDictionary, NSMutableArray, NSArray, NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VMUProcessDescription : NSObject {
    unsigned int _task;
    int _pid;
    BOOL _taskIsCorpse;
    NSString *_hardwareModel;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    _CSTypeRef _symbolicator;
    BOOL _executablePathNeedsCorrection;
    NSUInteger _executableLoadAddress;
    int _cpuType;
    unsigned int _platform;
    BOOL _is64Bit;
    timeval _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    *mapped_memory_t _mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}


@property (readonly, nonatomic) unsigned int idleExitStatus; // ivar: _idleExitStatus
@property (readonly, nonatomic) NSUInteger physicalFootprint; // ivar: _physicalFootprint
@property (readonly, nonatomic) NSUInteger physicalFootprintPeak; // ivar: _physicalFootprintPeak


+(id)parseBinaryImagesDescription:(id)arg0 ;
+(struct _CSTypeRef )symbolicatorFromBinaryImagesDescription:(id)arg0 ;
+(struct _CSTypeRef )symbolicatorFromBinaryImagesDescription:(id)arg0 withArchitecture:(struct _CSArchitecture )arg1 ;
-(BOOL)initFromCorpse;
-(BOOL)is64Bit;
-(BOOL)isAppleApplication;
-(id)_binaryImagesDescriptionForRanges:(id)arg0 ;
-(id)_buildInfoDescription;
-(id)_buildVersionDictionary;
-(id)_bundleLock;
-(id)_cpuTypeDescription;
-(id)_osVersionDictionary;
-(id)_rangesOfBinaryImages:(id)arg0 forBacktraces:(id)arg1 ;
-(id)_sanitizeVersion:(id)arg0 ;
-(id)_systemVersionDescription;
-(id)binaryImageDictionaryForAddress:(NSUInteger)arg0 ;
-(id)binaryImages;
-(id)binaryImagesDescription;
-(id)binaryImagesDescriptionForBacktraces:(id)arg0 ;
-(id)bundleIdentifier;
-(id)date;
-(id)dateAndVersionDescription;
-(id)description;
-(id)displayName;
-(id)executablePath;
-(id)initWithPid:(int)arg0 orTask:(unsigned int)arg1 ;
-(id)initWithTask:(unsigned int)arg0 getBinariesList:(BOOL)arg1 ;
-(id)parentProcessName;
-(id)parentProcessPath;
-(id)processDescriptionHeader;
-(id)processIdentifier;
-(id)processName;
-(id)processStatisticsDescription;
-(id)processVersion;
-(id)processVersionDictionary;
-(id)valueForEnvVar:(id)arg0 ;
-(int)cpuType;
-(int)parentPid;
-(int)pid;
-(unsigned int)task;
-(void)_libraryLoaded:(struct _CSTypeRef )arg0 ;
-(void)cleansePathsIncludingBinaryImageList:(BOOL)arg0 ;
-(void)clearCrashReporterInfo;
-(void)dealloc;
-(void)initFromLiveProcess;
-(void)setCrashReporterInfo;


@end


#endif