// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPMORPHANIMATORDATASOURCE_H
#define SBPIPMORPHANIMATORDATASOURCE_H

@class NSMutableDictionary, NSString, PGPictureInPictureController;
@protocol SBViewMorphAnimatorDataSource;

#import <Foundation/Foundation.h>

#import "SBPIPContentViewLayoutSettings.h"
#import "SBPIPMorphAnimatorController.h"
#import "SBPIPController.h"

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>

 {
    NSMutableDictionary *_morphAnimatorToPegasusInitialFrame;
}


@property (retain, nonatomic) SBPIPContentViewLayoutSettings *contentViewLayoutSettings; // ivar: _contentViewLayoutSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBPIPMorphAnimatorController *morphAnimatorController; // ivar: _morphAnimatorController
@property (retain, nonatomic) PGPictureInPictureController *pegasusController; // ivar: _pegasusController
@property (retain, nonatomic) SBPIPController *pipController; // ivar: _pipController
@property (readonly) Class superclass;


-(BOOL)_isChamoisWindowingUIEnabledForAnimator:(id)arg0 ;
-(BOOL)shouldProvideSourceClippingFrameInFixedCoordinateSpace:(id)arg0 ;
-(CGFloat)sourceBlackCurtainCornerRadiusForAnimator:(id)arg0 ;
-(CGFloat)sourceCornerRadiusForAnimator:(id)arg0 ;
-(CGFloat)targetFinalCornerRadiusForAnimator:(id)arg0 ;
-(id)initWithMorphAnimatorController:(id)arg0 pipController:(id)arg1 pegasusController:(id)arg2 contentViewLayoutSettings:(id)arg3 ;
-(struct CGRect )_appLayoutBoundingBoxForAnimator:(id)arg0 ;
-(struct CGRect )sourceContentContainerFrameForAnimator:(id)arg0 ;
-(struct CGRect )sourceContentFrameForAnimator:(id)arg0 ;
-(struct CGRect )sourceSubviewFrame:(struct CGRect )arg0 inScreenSpaceForAnimator:(id)arg1 ;
-(struct CGRect )targetFinalFrameForAnimator:(id)arg0 ;


@end


#endif