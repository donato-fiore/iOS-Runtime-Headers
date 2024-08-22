// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBROOTFOLDERLAYOUTWRAPPERVIEW_H
#define _SBROOTFOLDERLAYOUTWRAPPERVIEW_H

@class SBFTouchPassThroughView, UIView;



@interface _SBRootFolderLayoutWrapperView : SBFTouchPassThroughView

@property (nonatomic) CGSize extendedSize; // ivar: _extendedSize
@property (nonatomic) CGFloat headerOffset; // ivar: _headerOffset
@property (nonatomic) CGFloat statusBarHeightAdjustment; // ivar: _statusBarHeightAdjustment
@property (retain, nonatomic) UIView *wrappedView; // ivar: _wrappedView


-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_updateLayout;
-(void)layoutSubviews;


@end


#endif