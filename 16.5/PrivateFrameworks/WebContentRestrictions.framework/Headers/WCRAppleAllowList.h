// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCRAPPLEALLOWLIST_H
#define WCRAPPLEALLOWLIST_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface WCRAppleAllowList : NSObject

@property (retain) NSSet *allowList; // ivar: _allowList
@property (readonly, nonatomic) NSString *localPath; // ivar: _localPath


-(BOOL)contains:(id)arg0 ;
-(id)initFromFile:(id)arg0 ;


@end


#endif