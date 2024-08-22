// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWATCHLISTREORDERWATCHLISTCOMMAND_H
#define SCWATCHLISTREORDERWATCHLISTCOMMAND_H

@class NSString;
@protocol SCWZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWatchlistReorderWatchlistCommand : NSObject <SCWZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *precedingWatchlistIdentifier; // ivar: _precedingWatchlistIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier; // ivar: _watchlistIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWatchlistIdentifier:(id)arg0 precedingWatchlistIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif