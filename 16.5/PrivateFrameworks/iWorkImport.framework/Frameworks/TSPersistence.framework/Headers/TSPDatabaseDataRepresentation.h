// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDATABASEDATAREPRESENTATION_H
#define TSPDATABASEDATAREPRESENTATION_H

@class SFUDataRepresentation;


#import "TSPDatabase.h"

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {
    TSPDatabase *_database;
    NSInteger _identifier;
}




-(BOOL)hasSameLocationAs:(id)arg0 ;
-(NSInteger)dataLength;
-(id)initWithDatabase:(id)arg0 identifier:(NSInteger)arg1 ;
-(id)inputStream;
-(struct ZeroCopyInputStream *)createProtobufInputStream;
-(struct sqlite3_blob *)_openBlob;


@end


#endif