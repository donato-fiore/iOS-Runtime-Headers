// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USWEBHISTORY_H
#define USWEBHISTORY_H

@protocol _DKKnowledgeEventStreamDeleting;

#import <Foundation/Foundation.h>


@interface USWebHistory : NSObject

@property (readonly) NSObject<_DKKnowledgeEventStreamDeleting> *eventStorage; // ivar: _eventStorage
@property (readonly) BOOL usageTrusted; // ivar: _usageTrusted


-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithEventStorage:(id)arg0 usageTrusted:(BOOL)arg1 ;
-(void)_deleteEventsWithPredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)_deleteEventsWithWebUsagePredicate:(id)arg0 videoUsagePredicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteAllHistoryForApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteHistoryDuringInterval:(id)arg0 webApplication:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteHistoryForDomain:(id)arg0 webApplication:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteHistoryForURL:(id)arg0 webApplication:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteHistoryForURLs:(id)arg0 webApplication:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif