// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAITEMENTITYTYPESFETCHRESPONSE_H
#define VUIMEDIAITEMENTITYTYPESFETCHRESPONSE_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>


@interface VUIMediaItemEntityTypesFetchResponse : NSObject

@property (nonatomic, getter=areLocalMediaItemsAvailable) BOOL localMediaItemsAvailable; // ivar: _localMediaItemsAvailable
@property (copy, nonatomic) NSOrderedSet *mediaItemEntityTypes; // ivar: _mediaItemEntityTypes


-(BOOL)_updateWithResponse:(id)arg0 changes:(id)arg1 replaceContentsOnNilChanges:(BOOL)arg2 ;
-(id)description;
-(id)init;


@end


#endif