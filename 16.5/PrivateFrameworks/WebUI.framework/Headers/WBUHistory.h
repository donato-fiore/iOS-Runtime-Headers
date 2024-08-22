// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBUHISTORY_H
#define WBUHISTORY_H

@class WBSHistory;



@interface WBUHistory : WBSHistory

@property (nonatomic) BOOL shouldScheduleMaintenance; // ivar: _shouldScheduleMaintenance


-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg0 ;
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg0 ;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(id)init;
-(void)_addVisitedLinkForItemIfNeeded:(id)arg0 withVisitOrigin:(NSInteger)arg1 ;
-(void)_removeAllVisitedLinks;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg0 ;


@end


#endif