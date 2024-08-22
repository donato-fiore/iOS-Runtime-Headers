// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTRICHTEXTPAYLOAD_H
#define TSTRICHTEXTPAYLOAD_H

@class TSPObject, TSWPStorage;
@protocol TSPCopying;



@interface TSTRichTextPayload : TSPObject <TSPCopying>



@property (retain, nonatomic) TSWPStorage *storage; // ivar: _storage


+(id)payloadWithStorage:(id)arg0 ;
-(BOOL)tst_dataObjectIsEqual:(id)arg0 ;
-(NSUInteger)tst_dataObjectHash;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 storage:(id)arg1 ;
-(id)initWithStorage:(id)arg0 ;
-(id)string;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif