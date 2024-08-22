// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLCOMMANDMESSAGE_H
#define _ICLLCOMMANDMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "_ICLLAddQueueItemsCommand.h"
#import "_ICLLClientInfoCommand.h"
#import "_ICLLCurrentItemChangeCommand.h"
#import "_ICLLCurrentItemTransitionCommand.h"
#import "_ICLLMoveQueueItemCommand.h"
#import "_ICLLPlayNowQueueItemsCommand.h"
#import "_ICLLPlaybackControlSettingsCommand.h"
#import "_ICLLPlaybackSyncCommand.h"
#import "_ICLLReactionCommand.h"
#import "_ICLLRemoveQueueItemCommand.h"
#import "_ICLLReplaceQueueItemsCommand.h"

@interface _ICLLCommandMessage : PBCodable <NSCopying>

 {
    _ICLLAddQueueItemsCommand *_addItems;
    _ICLLClientInfoCommand *_clientInfo;
    int _command;
    _ICLLCurrentItemChangeCommand *_currentItemChange;
    _ICLLCurrentItemTransitionCommand *_currentItemTransition;
    _ICLLMoveQueueItemCommand *_moveItem;
    _ICLLPlayNowQueueItemsCommand *_playNowQueueItems;
    _ICLLPlaybackControlSettingsCommand *_playbackControlSettings;
    _ICLLPlaybackSyncCommand *_playbackSync;
    _ICLLReactionCommand *_reaction;
    _ICLLRemoveQueueItemCommand *_removeItem;
    _ICLLReplaceQueueItemsCommand *_replaceQueueItems;
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