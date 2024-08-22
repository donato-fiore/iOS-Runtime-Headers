// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPBOOKMARKFIELD_H
#define TSWPBOOKMARKFIELD_H

@class NSString, NSURL;
@protocol TSWPBookmarkEntry;


#import "TSWPSmartField.h"

@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) _NSRange effectiveRange;
@property (nonatomic) BOOL forRange; // ivar: _forRange
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) _NSRange range;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;


+(BOOL)supportsNonBodyBookmarks;
+(id)normalizedNameForName:(id)arg0 ;
+(id)uniqueBookmarkNameFromBase:(id)arg0 excludingNames:(id)arg1 ;
-(BOOL)allowsEditing;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(NSUInteger)attributeArrayKind;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithNewName:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 forRange:(BOOL)arg2 hidden:(BOOL)arg3 ;
-(int)styleAttributeArrayKind;
-(unsigned short)smartFieldKind;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)resetTextAttributeUUIDString;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif