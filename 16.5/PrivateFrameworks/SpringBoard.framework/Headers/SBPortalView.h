// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPORTALVIEW_H
#define SBPORTALVIEW_H

@class UIView, CAPortalLayer;



@interface SBPortalView : UIView

@property (nonatomic) BOOL allowsBackdropGroups;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL matchesTransform;
@property (nonatomic) BOOL passesTouchesThrough; // ivar: _passesTouchesThrough
@property (readonly, nonatomic) CAPortalLayer *portalLayer;
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView


+(Class)layerClass;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif