// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRACELOG_H
#define TITRACELOG_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TITraceLog : NSObject

@property (readonly, nonatomic) NSString *logContents; // ivar: _logContents
@property (retain, nonatomic) NSMutableDictionary *recordEntryCache; // ivar: _recordEntryCache


-(id)initWithLogContents:(id)arg0 ;
-(id)recordStringMatchingTypologyRecord:(id)arg0 ;
-(id)recordStringMatchingUUID:(id)arg0 ;
-(void)enumerateRecordsWithBlock:(id)arg0 ;
-(void)enumerateTextRecordEntriesUsingBlock:(id)arg0 ;
-(void)recordMatchingTypologyRecord:(id)arg0 ;
-(void)recordMatchingUUID:(id)arg0 ;


@end


#endif