// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTADDNEWWATCHLISTCOMMAND_H
#define SCWWATCHLISTADDNEWWATCHLISTCOMMAND_H

@class NSString, NSNumber, NSArray;
@protocol SCWZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWWatchlistAddNewWatchlistCommand : NSObject <SCWZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *displayState; // ivar: _displayState
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSNumber *sortOrderState; // ivar: _sortOrderState
@property (readonly, copy, nonatomic) NSNumber *sortState; // ivar: _sortState
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *symbols; // ivar: _symbols
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier; // ivar: _watchlistIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 sortState:(id)arg2 sortOrderState:(id)arg3 displayState:(id)arg4 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 symbols:(id)arg2 sortState:(id)arg3 sortOrderState:(id)arg4 displayState:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif