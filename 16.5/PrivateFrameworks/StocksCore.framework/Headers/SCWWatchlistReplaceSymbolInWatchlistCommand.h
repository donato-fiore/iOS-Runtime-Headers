// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTREPLACESYMBOLINWATCHLISTCOMMAND_H
#define SCWWATCHLISTREPLACESYMBOLINWATCHLISTCOMMAND_H

@class NSString;
@protocol SCWZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWWatchlistReplaceSymbolInWatchlistCommand : NSObject <SCWZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *oldSymbol; // ivar: _oldSymbol
@property (readonly, copy, nonatomic) NSString *replacementSymbol; // ivar: _replacementSymbol
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier; // ivar: _watchlistIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOldSymbol:(id)arg0 replacementSymbol:(id)arg1 watchlistIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif