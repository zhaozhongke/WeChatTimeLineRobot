/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "PBCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ShakePeopleStorage : XXUnknownSuperclass <PBCoding, NSCoding, NSCopying> {
	NSMutableArray* m_arrShakeList;
	unsigned long m_uiSoundStatus;
	unsigned long m_uiNewArriveCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long m_uiNewArriveCount;
@property(assign, nonatomic) unsigned long m_uiSoundStatus;
@property(retain, nonatomic) NSMutableArray* m_arrShakeList;
+(void)initialize;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
-(void)preInit;
-(id)copyWithZone:(NSZone*)zone;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
