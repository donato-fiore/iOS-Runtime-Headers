// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTVISUALFORMATPARSER_H
#define _UICOLLECTIONLAYOUTVISUALFORMATPARSER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutVisualFormatParser : NSObject

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *visualFormat; // ivar: _visualFormat


+(NSUInteger)axisForVisualFormat:(id)arg0 ;
+(id)parserWithVisualFormat:(id)arg0 ;
+(id)parsersWithVisualFormats:(id)arg0 seperatedByDelimiter:(id)arg1 ;
-(id)description;
-(id)initWithVisualFormat:(id)arg0 ;
-(void)_parse;


@end


#endif