// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLREPLACEQUEUEITEMSACTION_H
#define _ICLLREPLACEQUEUEITEMSACTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_ICLLAutoPlaySource.h"
#import "_ICLLQueueQuery.h"
#import "_ICLLRadioSource.h"

@interface _ICLLReplaceQueueItemsAction : PBCodable <NSCopying>

 {
    _ICLLAutoPlaySource *_autoPlay;
    NSMutableArray *_items;
    NSString *_preferredPlayItemId;
    _ICLLQueueQuery *_queueQuery;
    _ICLLRadioSource *_radio;
    int _revision;
    int _trackGenerationSource;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif