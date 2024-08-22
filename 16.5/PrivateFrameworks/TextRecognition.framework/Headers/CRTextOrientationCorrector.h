// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTEXTORIENTATIONCORRECTOR_H
#define CRTEXTORIENTATIONCORRECTOR_H

@class NSString;
@protocol CRTextOrientationCorrecting, CRTextSequenceScriptCorrecting;

#import <Foundation/Foundation.h>

#import "CRTextOrientationRecognizerConfiguration.h"
#import "CRCTCCVNLPOrientationDecoder.h"
#import "CRTextOrientationModelV1.h"

@interface CRTextOrientationCorrector : NSObject <CRTextOrientationCorrecting, CRTextSequenceScriptCorrecting>



@property (retain) CRTextOrientationRecognizerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRCTCCVNLPOrientationDecoder *decoder; // ivar: _decoder
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CRTextOrientationModelV1 *model; // ivar: _model
@property (readonly) Class superclass;


-(BOOL)_loadResourcesWithError:(*id)arg0 ;
-(BOOL)correctOrientationOnAllFeatures:(BOOL)arg0 sortedFeatures:(id)arg1 image:(id)arg2 error:(*id)arg3 ;
-(BOOL)correctSequenceScriptOnAllFeatures:(BOOL)arg0 sortedFeatures:(id)arg1 image:(id)arg2 error:(*id)arg3 ;
-(BOOL)decodeOutputForInput:(id)arg0 shouldDecodeScriptResult:(BOOL)arg1 shouldDecodeOrientationResult:(BOOL)arg2 error:(*id)arg3 ;
-(NSInteger)_angleDirectionOfBaselineAngle:(CGFloat)arg0 ;
-(NSInteger)_orientationForBaselineAngle:(CGFloat)arg0 ;
-(NSInteger)calculateAngleDirectionForInput:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)_applyAngleDirection:(NSInteger)arg0 feature:(id)arg1 ;


@end


#endif