// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPINGDESRECORDWRITER_H
#define TITYPINGDESRECORDWRITER_H

@class DESRecordStore;

#import <Foundation/Foundation.h>


@interface TITypingDESRecordWriter : NSObject

@property (retain, nonatomic) DESRecordStore *typingDataStore; // ivar: _typingDataStore


-(BOOL)shouldRecordToDES;
-(id)init;
-(void)clearStoredRecordsWithCompletionHandler:(id)arg0 ;
-(void)fetchRecords:(id)arg0 ;
-(void)storeAlignedSession:(id)arg0 completion:(id)arg1 ;
-(void)storeTypingSession:(id)arg0 containsCP:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif