// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTION_H
#define WFCONTEXTUALACTION_H

@class NSString, NSDate, NSData, NSArray, CSSearchableItem;
@protocol WFSpotlightResultRunnable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFContextualActionIcon.h"
#import "WFContextualAction.h"
#import "WFContextualActionFilteringBehavior.h"

@interface WFContextualAction : NSObject <WFSpotlightResultRunnable, NSSecureCoding>



@property (readonly, nonatomic) WFContextualActionIcon *accessoryIcon; // ivar: _accessoryIcon
@property (readonly, nonatomic) WFContextualAction *actionForRunningFromSpotlight;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL actionShowsUserInterface; // ivar: _actionShowsUserInterface
@property (readonly, nonatomic, getter=isAlternate) BOOL alternate; // ivar: _alternate
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (readonly, nonatomic) NSUInteger correspondingSystemActionType; // ivar: _correspondingSystemActionType
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL definesDisplayOrder;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayFormatString; // ivar: _displayFormatString
@property (readonly, nonatomic) NSUInteger displayOrder;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) WFContextualActionFilteringBehavior *filteringBehavior; // ivar: _filteringBehavior
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFContextualActionIcon *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSData *iconImageData;
@property (readonly, nonatomic) CGFloat iconImageScale;
@property (readonly, copy, nonatomic) NSString *iconSymbolName;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL outputsFiles;
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSInteger resultFileOperation; // ivar: _resultFileOperation
@property (readonly, nonatomic, getter=isReversible) BOOL reversible; // ivar: _reversible
@property (readonly, nonatomic) BOOL showsUserInterfaceWhenRunning;
@property (readonly, nonatomic) CSSearchableItem *spotlightItem;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *subtitleFormatString; // ivar: _subtitleFormatString
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *wfActionIdentifier; // ivar: _wfActionIdentifier


+(BOOL)supportsSecureCoding;
+(id)spotlightDomainIdentifier;
+(id)systemActionWithType:(NSUInteger)arg0 identifier:(id)arg1 displayString:(id)arg2 inputTypes:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)contextForSurface:(NSUInteger)arg0 ;
-(id)copyWithParameters:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 wfActionIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 parameters:(id)arg3 displayFormatString:(id)arg4 title:(id)arg5 subtitleFormatString:(id)arg6 icon:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 wfActionIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 parameters:(id)arg3 displayFormatString:(id)arg4 title:(id)arg5 subtitleFormatString:(id)arg6 icon:(id)arg7 accessoryIcon:(id)arg8 actionShowsUserInterface:(BOOL)arg9 actionHasResult:(BOOL)arg10 isReversible:(BOOL)arg11 ;
-(id)initWithIdentifier:(id)arg0 wfActionIdentifier:(id)arg1 type:(NSUInteger)arg2 correspondingSystemActionType:(NSUInteger)arg3 associatedAppBundleIdentifier:(id)arg4 resultFileOperation:(NSInteger)arg5 alternate:(BOOL)arg6 filteringBehavior:(id)arg7 parameters:(id)arg8 displayFormatString:(id)arg9 title:(id)arg10 subtitleFormatString:(id)arg11 icon:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 wfActionIdentifier:(id)arg1 type:(NSUInteger)arg2 correspondingSystemActionType:(NSUInteger)arg3 associatedAppBundleIdentifier:(id)arg4 resultFileOperation:(NSInteger)arg5 alternate:(BOOL)arg6 filteringBehavior:(id)arg7 parameters:(id)arg8 displayFormatString:(id)arg9 title:(id)arg10 subtitleFormatString:(id)arg11 icon:(id)arg12 accessoryIcon:(id)arg13 actionShowsUserInterface:(BOOL)arg14 isReversible:(BOOL)arg15 ;
-(id)parameterDisplayStrings;
-(id)runDescriptorForSurface:(NSUInteger)arg0 ;
-(id)runRequestForSurface:(NSUInteger)arg0 ;
-(void)configureIfNeededForContext:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif