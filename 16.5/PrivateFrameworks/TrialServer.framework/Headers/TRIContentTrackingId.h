// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICONTENTTRACKINGID_H
#define TRICONTENTTRACKINGID_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIContentTrackingId : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *str; // ivar: _str


+(id)contentIdWithStr:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContentId:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementStr:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithStr:(id)arg0 ;


@end


#endif