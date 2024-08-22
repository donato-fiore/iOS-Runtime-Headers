// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONCONNECTIONOPTIONS_H
#define UIDICTATIONCONNECTIONOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIDictationConnectionOptions : NSObject

@property (nonatomic) BOOL acceptsDictationSearchResults; // ivar: _acceptsDictationSearchResults
@property (copy, nonatomic) NSString *activationIdentifier; // ivar: _activationIdentifier
@property (nonatomic) NSUInteger activationType; // ivar: _activationType
@property (nonatomic) BOOL autoPunctuation; // ivar: _autoPunctuation
@property (copy, nonatomic) NSString *fieldIdentifier; // ivar: _fieldIdentifier
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (copy, nonatomic) NSString *layoutIdentifier; // ivar: _layoutIdentifier
@property (copy, nonatomic) NSString *postfixText; // ivar: _postfixText
@property (copy, nonatomic) NSString *prefixText; // ivar: _prefixText
@property (copy, nonatomic) NSString *regionCode; // ivar: _regionCode
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (nonatomic) BOOL secureInput; // ivar: _secureInput
@property (copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (copy, nonatomic) id *turnIdentifier; // ivar: _turnIdentifier
@property (nonatomic) BOOL useAutomaticEndpointing; // ivar: _useAutomaticEndpointing
@property (nonatomic) NSUInteger version; // ivar: _version




@end


#endif