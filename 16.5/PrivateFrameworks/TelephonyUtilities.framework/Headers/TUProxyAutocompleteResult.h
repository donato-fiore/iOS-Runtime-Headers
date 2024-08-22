// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUPROXYAUTOCOMPLETERESULT_H
#define TUPROXYAUTOCOMPLETERESULT_H

@class CNAutocompleteResult, CNContact, NSString, NSArray;
@protocol TUSearchResult;

#import <Foundation/Foundation.h>


@interface TUProxyAutocompleteResult : NSObject <TUSearchResult>



@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult; // ivar: _autocompleteResult
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *callerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *handles;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSInteger mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAutocompleteResult:(id)arg0 ;


@end


#endif