// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDATABASEOBJECT_H
#define TSPDATABASEOBJECT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface TSPDatabaseObject : NSObject

@property (readonly, nonatomic) int classType; // ivar: _classType
@property (readonly, nonatomic) NSInteger dataState;
@property (readonly, nonatomic) NSString *fileState;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) BOOL hasDataState;
@property (readonly, nonatomic) BOOL hasFileState;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier


+(id)databaseObjectWithIdentifier:(NSInteger)arg0 classType:(int)arg1 dataState:(NSInteger)arg2 ;
+(id)databaseObjectWithIdentifier:(NSInteger)arg0 classType:(int)arg1 fileState:(id)arg2 packageURL:(id)arg3 ;
-(id)init;
-(id)initWithIdentifier:(NSInteger)arg0 classType:(int)arg1 ;


@end


#endif