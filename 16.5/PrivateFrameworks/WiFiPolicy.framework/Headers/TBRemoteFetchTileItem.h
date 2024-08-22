// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TBREMOTEFETCHTILEITEM_H
#define TBREMOTEFETCHTILEITEM_H

@class NSString, NSError, NSArray;
@protocol TBFetchResponseTileItem, TBTile;

#import <Foundation/Foundation.h>


@interface TBRemoteFetchTileItem : NSObject <TBFetchResponseTileItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *networks; // ivar: _networks
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TBTile> *tile; // ivar: _tile


-(id)initWithEmptyTileKey:(NSUInteger)arg0 etag:(id)arg1 error:(id)arg2 ;
-(id)initWithTile:(id)arg0 status:(NSUInteger)arg1 etag:(id)arg2 error:(id)arg3 ;


@end


#endif