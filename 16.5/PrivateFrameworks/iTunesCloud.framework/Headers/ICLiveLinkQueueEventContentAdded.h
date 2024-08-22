// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIVELINKQUEUEEVENTCONTENTADDED_H
#define ICLIVELINKQUEUEEVENTCONTENTADDED_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ICLiveLinkQueueEventContentAdded : NSObject

@property (readonly, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) NSInteger containerKind; // ivar: _containerKind
@property (readonly, copy, nonatomic) NSString *containerMediaIdentifier; // ivar: _containerMediaIdentifier
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers


-(id)description;
-(id)initWithItemIdentifiers:(id)arg0 containerKind:(NSInteger)arg1 containerIdentifier:(id)arg2 containerMediaIdentifier:(id)arg3 ;


@end


#endif