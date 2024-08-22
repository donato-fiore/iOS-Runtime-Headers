// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFOCUSMODE_H
#define SBHFOCUSMODE_H

@class NSMutableSet, UIColor, NSString, NSArray;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFolder.h"

@interface SBHFocusMode : NSObject <BSDescriptionProviding>



@property (copy, nonatomic) NSMutableSet *allowedApplicationBundleIdentifiers; // ivar: _allowedApplicationBundleIdentifiers
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) BOOL customizedHomeScreenPagesEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSMutableSet *deniedApplicationBundleIdentifiers; // ivar: _deniedApplicationBundleIdentifiers
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFolder *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesOnlyDeniedApplicationBadges; // ivar: _hidesOnlyDeniedApplicationBadges
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *lists;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL showsOnlyAllowedApplicationBadges; // ivar: _showsOnlyAllowedApplicationBadges
@property (nonatomic, getter=isSleepFocus) BOOL sleepFocus; // ivar: _sleepFocus
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbol; // ivar: _symbol


-(BOOL)wantsListVisible:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 folder:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addToList:(id)arg0 ;
-(void)removeFromList:(id)arg0 ;


@end


#endif