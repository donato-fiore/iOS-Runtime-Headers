// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIINPUTCONTEXTHISTORY_H
#define TIINPUTCONTEXTHISTORY_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding>

 {
    set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> _entries;
    set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> _pendingEntries;
}


@property (readonly, nonatomic) NSString *aggregateText;
@property ? entries;
@property (readonly, nonatomic) NSString *mostRecentNonSenderTextEntry;
@property (readonly, nonatomic) BOOL mostRecentTextEntryIsByMe;
@property (readonly, nonatomic) NSString *mostRecentTextEntryLogString;
@property ? pendingEntries;
@property (readonly, nonatomic) NSSet *recipientIdentifiers; // ivar: _recipientIdentifiers
@property (readonly, nonatomic) NSSet *recipientNames; // ivar: _recipientNames
@property (readonly, nonatomic) NSString *senderIdentifier;
@property (readonly, nonatomic) NSSet *senderIdentifiers; // ivar: _senderIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecipientIdentifiers:(id)arg0 ;
-(id)initWithRecipientIdentifiers:(id)arg0 senderIdentifier:(id)arg1 ;
-(id)initWithRecipientIdentifiers:(id)arg0 senderIdentifiers:(id)arg1 ;
-(id)mostRecentTextEntries:(NSUInteger)arg0 ;
-(void)_enumerateAllEntriesAsInputContextEntries:(id)arg0 ;
-(void)addTextEntry:(id)arg0 timestamp:(id)arg1 ;
-(void)addTextEntry:(id)arg0 timestamp:(id)arg1 senderIdentifier:(id)arg2 ;
-(void)appendPendingEntriesFromInputContextHistory:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAllEntries:(id)arg0 ;
-(void)enumeratePendingEntries:(id)arg0 ;
-(void)updateRecipientNames:(id)arg0 ;


@end


#endif