// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOUNTABLETEXTLOCATION_H
#define NSCOUNTABLETEXTLOCATION_H

@class NSString;
@protocol NSTextLocationPrivate;

#import <Foundation/Foundation.h>


@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate>



@property (readonly) NSUInteger characterIndex; // ivar: _characterIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEndOfDocument) BOOL endOfDocument;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *type;


+(id)endOfDocumentLocation;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextLocation:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 ;


@end


#endif