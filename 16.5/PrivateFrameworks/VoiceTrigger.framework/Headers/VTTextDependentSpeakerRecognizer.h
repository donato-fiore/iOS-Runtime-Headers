// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTTEXTDEPENDENTSPEAKERRECOGNIZER_H
#define VTTEXTDEPENDENTSPEAKERRECOGNIZER_H

@class NSString, NSMutableData, NSData, EARPSRAudioProcessor;
@protocol EARPSRAudioProcessorDelegate, VTTextDependentSpeakerRecognizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTTextDependentSpeakerRecognizer : NSObject <EARPSRAudioProcessorDelegate>

 {
    *void _novDetect;
}


@property (retain, nonatomic) NSString *assetHash; // ivar: _assetHash
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VTTextDependentSpeakerRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger getSATVectorCount;
@property (readonly) NSUInteger hash;
@property (nonatomic) float lastRequestSatScore; // ivar: _lastRequestSatScore
@property (nonatomic) NSUInteger numSamplesProecssed; // ivar: _numSamplesProecssed
@property (retain, nonatomic) NSMutableData *psrAudioDataForLogging; // ivar: _psrAudioDataForLogging
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *resourcePath; // ivar: _resourcePath
@property (retain, nonatomic) NSString *satDirectory; // ivar: _satDirectory
@property (retain, nonatomic) NSData *speakerVector; // ivar: _speakerVector
@property (retain, nonatomic) EARPSRAudioProcessor *speakerVectorGenerator; // ivar: _speakerVectorGenerator
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // ivar: _stateSerialQueue
@property (readonly) Class superclass;
@property (nonatomic) BOOL tdPsrCanProcessRequest; // ivar: _isTdPsrAbleToProcess
@property (retain, nonatomic) NSString *tdSATModelDirPath; // ivar: _tdSATModelDirPath
@property (retain, nonatomic) NSString *tdSATModelFilePath; // ivar: _tdSATModelFilePath


+(BOOL)psrTdAssetExistsAtResourcePath:(id)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 ;
+(void)_createDirectoryIfDoesNotExist:(id)arg0 ;
-(CGFloat)_getFloatValueForNDAPIConfigOption:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(CGFloat)getCombinationWeight;
-(CGFloat)getThresholdSAT;
-(id)_getValueForNDAPIConfigOption:(id)arg0 ;
-(void)dealloc;
-(void)deleteExistingSATModel;
-(void)deleteVectorAtIndex:(int)arg0 ;
-(void)endAudio;
-(void)logWithAudioFilepath:(id)arg0 ;
-(void)processAudio:(*short)arg0 numSamples:(NSUInteger)arg1 ;
-(void)psrAudioProcessor:(id)arg0 hasResult:(id)arg1 numElements:(NSUInteger)arg2 ;
-(void)resetForNewRequest;
-(void)updateSAT;


@end


#endif