// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGMLESPRESSOMODEL_H
#define VGMLESPRESSOMODEL_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface VGMLEspressoModel : NSObject {
    NSMutableArray *_inputLayerNames;
    NSMutableArray *_outputLayerNames;
    NSMutableArray *_inputBuffers;
    NSMutableArray *_outputBuffers;
    *void _plan;
    ? _network;
    int _storageFormat;
    *void _context;
    int _engine;
    int _plan_flags;
}


@property (readonly, nonatomic) NSString *networkFilePath; // ivar: _networkFilePath
@property (readonly, nonatomic) NSUInteger numInputs; // ivar: _numInputs
@property (readonly, nonatomic) NSUInteger numOutputs; // ivar: _numOutputs


-(*NSUInteger)getInputDimensions:(NSUInteger)arg0 ;
-(*NSUInteger)getOutputDimensions:(NSUInteger)arg0 ;
-(NSUInteger)getInputSize;
-(NSUInteger)getOutputSize;
-(id)inferInputs:(id)arg0 ;
-(id)initWithModelInfo:(id)arg0 ;
-(id)initWithModelPath:(id)arg0 ;
-(void)dealloc;
-(void)inferInputs:(id)arg0 toOutputs:(id)arg1 ;
-(void)inferModel;


@end


#endif