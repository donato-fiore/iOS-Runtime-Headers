// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONLISTSUPPLEMENTARYVIEWCONFIGURATION_H
#define NCNOTIFICATIONLISTSUPPLEMENTARYVIEWCONFIGURATION_H

@class NSArray, NSString, UIAction, UIColor;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface NCNotificationListSupplementaryViewConfiguration : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions; // ivar: _auxiliaryOptionActions
@property (readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText; // ivar: _auxiliaryOptionsSummaryText
@property (readonly, nonatomic) BOOL containsUnmanagedContent; // ivar: _containsUnmanagedContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) UIAction *defaultAction; // ivar: _defaultAction
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, copy, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (readonly, nonatomic) BOOL preventsUserDismissal; // ivar: _preventsUserDismissal
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *supplementaryActions; // ivar: _supplementaryActions
@property (readonly, copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, copy, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithGroupingIdentifier:(id)arg0 groupName:(id)arg1 defaultAction:(id)arg2 supplementaryActions:(id)arg3 auxiliaryOptionsSummaryText:(id)arg4 auxiliaryOptionActions:(id)arg5 tintColor:(id)arg6 textColor:(id)arg7 materialRecipe:(NSInteger)arg8 containsUnmanagedContent:(BOOL)arg9 preventsUserDismissal:(BOOL)arg10 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif