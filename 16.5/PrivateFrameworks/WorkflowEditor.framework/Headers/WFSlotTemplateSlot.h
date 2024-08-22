// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSLOTTEMPLATESLOT_H
#define WFSLOTTEMPLATESLOT_H

@class NSAttributedString, NSString;
@protocol WFSlotTemplateContent, NSCopying;

#import <Foundation/Foundation.h>

#import "WFSlotIdentifier.h"

@interface WFSlotTemplateSlot : NSObject <WFSlotTemplateContent, NSCopying>



@property (copy, nonatomic) NSAttributedString *contentAttributedString; // ivar: _contentAttributedString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) WFSlotIdentifier *identifier; // ivar: _identifier
@property (nonatomic, getter=isInvalid) BOOL invalid; // ivar: _invalid
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (copy, nonatomic) NSString *localizedPlaceholder; // ivar: _localizedPlaceholder
@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (nonatomic) BOOL preferContextMenu; // ivar: _preferContextMenu
@property (nonatomic) BOOL prefersNoWrapping; // ivar: _prefersNoWrapping
@property (nonatomic) BOOL standaloneTextAttachment; // ivar: _standaloneTextAttachment
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userInputInsertionIndex; // ivar: _userInputInsertionIndex


+(id)addingSlotWithKey:(id)arg0 ;
+(id)slotWithLocalizedName:(id)arg0 localizedPlaceholder:(id)arg1 key:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLocalizedName:(id)arg0 localizedPlaceholder:(id)arg1 identifier:(id)arg2 ;
-(void)populateWithAttributedString:(id)arg0 ;
-(void)populateWithIcon:(id)arg0 string:(id)arg1 ;
-(void)populateWithString:(id)arg0 ;
-(void)populateWithVariable:(id)arg0 ;
-(void)populateWithVariableString:(id)arg0 askVariableName:(id)arg1 ;


@end


#endif