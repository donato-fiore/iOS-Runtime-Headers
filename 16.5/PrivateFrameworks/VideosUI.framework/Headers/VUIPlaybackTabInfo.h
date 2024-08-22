// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKTABINFO_H
#define VUIPLAYBACKTABINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "VUIPlaybackTabDetails.h"

@interface VUIPlaybackTabInfo : NSObject

@property (retain, nonatomic) NSString *canonicalId; // ivar: _canonicalId
@property (readonly, nonatomic) BOOL isInfoTabAllowed; // ivar: _isInfoTabAllowed
@property (readonly, nonatomic) VUIPlaybackTabDetails *multiviewTabInfo; // ivar: _multiviewTabInfo
@property (readonly, nonatomic) NSArray *tabDetails; // ivar: _tabDetails


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif