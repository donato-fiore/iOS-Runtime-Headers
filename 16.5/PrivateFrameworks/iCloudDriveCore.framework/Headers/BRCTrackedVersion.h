// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTRACKEDVERSION_H
#define BRCTRACKEDVERSION_H

@class NSString, BRFileObjectID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BRCTrackedVersion : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *etagIfLoser; // ivar: _etagIfLoser
@property (readonly, nonatomic) BRFileObjectID *fileObjectID; // ivar: _fileObjectID


+(id)trackedVersionFor:(id)arg0 withEtagIfLoser:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif