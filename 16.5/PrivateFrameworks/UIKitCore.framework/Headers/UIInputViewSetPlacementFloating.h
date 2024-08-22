// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENTFLOATING_H
#define UIINPUTVIEWSETPLACEMENTFLOATING_H

@class NSArray, NSString;
@protocol _UIGeometryChangeObserver, NSSecureCoding;


#import "UIInputViewSetPlacementUndocked.h"
#import "UIInputViewSetPlacementOnScreen.h"
#import "UIResponder.h"

@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <_UIGeometryChangeObserver, NSSecureCoding>

 {
    CGRect _responderRect;
    CGSize _lastSize;
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;
    NSArray *_subPlacements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat floatingWidth; // ivar: _floatingWidth
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIResponder *responderToFollow; // ivar: _responderToFollow
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)infoWithPoint:(struct CGPoint )arg0 forOwner:(id)arg1 ;
+(id)placementWithUndockedOffset:(struct CGPoint )arg0 chromeBuffer:(struct UIEdgeInsets )arg1 floatingWidth:(CGFloat)arg2 ;
+(struct CGRect )frameAtOffset:(struct CGPoint )arg0 keyboardSize:(struct CGSize )arg1 screenSize:(struct CGSize )arg2 ;
-(BOOL)accessoryViewWillAppear;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFloating;
-(BOOL)isFloatingAssistantView;
-(BOOL)showsEditItems;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(NSUInteger)indexForPurpose:(NSUInteger)arg0 ;
-(id)applicatorInfoForOwner:(id)arg0 ;
-(id)assistantView;
-(id)currentResponderView;
-(id)expiringPlacement;
-(id)horizontalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)subPlacements;
-(id)widthConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGRect )adjustBoundsForNotificationsWithOwner:(id)arg0 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setSubPlacements:(id)arg0 ;
-(void)updateChromeBuffer;


@end


#endif