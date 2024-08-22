// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICRESTOREREQUESTPARAMETERS_H
#define ICMUSICRESTOREREQUESTPARAMETERS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface ICMusicRestoreRequestParameters : NSObject

@property (readonly, copy, nonatomic) NSNumber *accountID; // ivar: _accountID
@property (readonly, copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (readonly, copy, nonatomic) NSString *flavor; // ivar: _flavor
@property (readonly, copy, nonatomic) NSNumber *matchStatus; // ivar: _matchStatus
@property (readonly, copy, nonatomic) NSString *mediaKind; // ivar: _mediaKind
@property (readonly, copy, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithItemID:(id)arg0 title:(id)arg1 storeFrontID:(id)arg2 mediaKind:(id)arg3 accountID:(id)arg4 matchStatus:(id)arg5 flavor:(id)arg6 ;


@end


#endif