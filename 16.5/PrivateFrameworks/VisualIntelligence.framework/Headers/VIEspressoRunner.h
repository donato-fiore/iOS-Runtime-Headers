// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIESPRESSORUNNER_H
#define VIESPRESSORUNNER_H

@class NSString, NSArray, NSMutableData;

#import <Foundation/Foundation.h>


@interface VIEspressoRunner : NSObject {
    CGSize _expectedInputSize;
    NSString *_imageInputName;
    NSArray *_outputNames;
    *void _context;
    *void _plan;
    ? _net;
    NSMutableData *_outputBuffers;
}


@property (nonatomic) BOOL isImageRequired; // ivar: _isImageRequired


+(id)formatErrorMessage:(id)arg0 status:(int)arg1 ;
+(void)logErrorMessage:(id)arg0 status:(int)arg1 ;
-(BOOL)setFeatures:(id)arg0 error:(*id)arg1 ;
-(BOOL)setFrame:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithMLNetURL:(id)arg0 expectedInputSize:(struct CGSize )arg1 imageInputName:(id)arg2 featureNames:(id)arg3 outputNames:(id)arg4 preferredMetalDevice:(id)arg5 usesCPUOnly:(BOOL)arg6 ;
-(id)processWithError:(*id)arg0 ;
-(void)dealloc;
-(void)set:(id)arg0 error:(*id)arg1 ;


@end


#endif