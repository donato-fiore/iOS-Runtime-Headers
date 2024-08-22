// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCSSUGGESTIONSDATASOURCE_H
#define TCSSUGGESTIONSDATASOURCE_H

@class NSString, NSArray;
@protocol TCSSuggestionsObserver, TCSSuggestionsDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "TCSSuggestions.h"

@interface TCSSuggestionsDataSource : NSObject <TCSSuggestionsObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TCSSuggestionsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSuggestions;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *suggestedContacts; // ivar: _suggestedContacts
@property (retain, nonatomic) TCSSuggestions *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(id)_sortedContactsArrayFromArray:(id)arg0 ;
-(id)initWithSuggestions:(id)arg0 ;
-(void)_handleContactStoreDidChange:(id)arg0 ;
-(void)_handleDeviceFirstUnlock;
-(void)_handlePersonNamePreferencesChangeNotification;
-(void)_invalidate;
-(void)_notifyDelegateSuggestionsChanged;
-(void)dealloc;
-(void)suggestionsDidChange:(id)arg0 ;


@end


#endif