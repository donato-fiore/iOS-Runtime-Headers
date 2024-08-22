// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSNOTIFICATIONACTIONRECORD_H
#define UNSNOTIFICATIONACTIONRECORD_H

@class NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface UNSNotificationActionRecord : NSObject

@property (copy, nonatomic) NSString *actionType; // ivar: _actionType
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired; // ivar: _authenticationRequired
@property (nonatomic, getter=isDestructive) BOOL destructive; // ivar: _destructive
@property (nonatomic, getter=isForeground) BOOL foreground; // ivar: _foreground
@property (nonatomic) BOOL hasSystemIcon; // ivar: _hasSystemIcon
@property (copy, nonatomic) NSString *iconImageName; // ivar: _iconImageName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL shouldPreventNotificationDismiss; // ivar: _shouldPreventNotificationDismiss
@property (copy, nonatomic) NSString *textInputButtonTitle; // ivar: _textInputButtonTitle
@property (copy, nonatomic) NSArray *textInputButtonTitleLocalizationArguments; // ivar: _textInputButtonTitleLocalizationArguments
@property (copy, nonatomic) NSString *textInputButtonTitleLocalizationKey; // ivar: _textInputButtonTitleLocalizationKey
@property (copy, nonatomic) NSString *textInputPlaceholder; // ivar: _textInputPlaceholder
@property (copy, nonatomic) NSArray *textInputPlaceholderLocalizationArguments; // ivar: _textInputPlaceholderLocalizationArguments
@property (copy, nonatomic) NSString *textInputPlaceholderLocalizationKey; // ivar: _textInputPlaceholderLocalizationKey
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *titleLocalizationArguments; // ivar: _titleLocalizationArguments
@property (copy, nonatomic) NSString *titleLocalizationKey; // ivar: _titleLocalizationKey
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif