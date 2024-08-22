// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTADDTOWATCHLISTORDERCOMMAND_H
#define SCWWATCHLISTADDTOWATCHLISTORDERCOMMAND_H

@class NSString, NSArray;
@protocol SCWZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWWatchlistAddToWatchlistOrderCommand : NSObject <SCWZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier; // ivar: _watchlistIdentifier
@property (readonly, copy, nonatomic) NSArray *watchlistIdentifiers; // ivar: _watchlistIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWatchlistIdentifiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif