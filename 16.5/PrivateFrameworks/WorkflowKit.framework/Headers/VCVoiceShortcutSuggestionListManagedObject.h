// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVOICESHORTCUTSUGGESTIONLISTMANAGEDOBJECT_H
#define VCVOICESHORTCUTSUGGESTIONLISTMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSData;



@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (retain, nonatomic) NSData *serializedSuggestions;
@property (nonatomic) int shortcutAvailabilityOptions;


+(id)fetchRequest;
-(id)descriptor;


@end


#endif