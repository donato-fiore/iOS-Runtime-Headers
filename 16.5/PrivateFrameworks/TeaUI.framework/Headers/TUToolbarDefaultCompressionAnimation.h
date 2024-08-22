// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUTOOLBARDEFAULTCOMPRESSIONANIMATION_H
#define TUTOOLBARDEFAULTCOMPRESSIONANIMATION_H

@class UIToolbar;
@protocol TUBarCompressionAnimating;

#import <Foundation/Foundation.h>


@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>



@property (readonly, nonatomic) BOOL shouldCloseGapOnScroll;
@property (readonly, nonatomic) BOOL shouldCompressAtTop;
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) CGFloat topOffset; // ivar: _topOffset


-(BOOL)animationShouldBeginForScrollView:(id)arg0 currentlyFullyCompressed:(BOOL)arg1 ;
-(CGFloat)maximumBarHeightForTraitCollection:(id)arg0 ;
-(CGFloat)minimumBarHeightForTraitCollection:(id)arg0 ;
-(id)initWithToolbar:(id)arg0 ;
-(void)prepareForUpdates;
-(void)reloadWithTraitCollection:(id)arg0 ;
-(void)scrollViewIsAtTop:(BOOL)arg0 offset:(CGFloat)arg1 ;
-(void)updateWithPercentage:(CGFloat)arg0 ;


@end


#endif