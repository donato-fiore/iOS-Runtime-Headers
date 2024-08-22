// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONPROVIDERMANAGER_H
#define TUCONVERSATIONPROVIDERMANAGER_H

@protocol TUConversationProviderManagerDataSource;

#import <Foundation/Foundation.h>


@interface TUConversationProviderManager : NSObject

@property (readonly, nonatomic) NSObject<TUConversationProviderManagerDataSource> *dataSource; // ivar: _dataSource


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)conversationProviderForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)doesHandle:(id)arg0 correspondToConversationProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)generatePseudonymHandleForConversationProvider:(id)arg0 expiryDuration:(CGFloat)arg1 URI:(id)arg2 completionHandler:(id)arg3 ;
-(void)registerConversationProviderForConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForCallbacksForProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)renewPseudonymHandle:(id)arg0 forConversationProvider:(id)arg1 expirationDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)revokePseudonymHandle:(id)arg0 forConversationProvider:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif