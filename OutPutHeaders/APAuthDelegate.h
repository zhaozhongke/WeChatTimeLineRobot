/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol APAuthDelegate <NSObject>
@optional
-(void)didExpiredOfApAuth:(id)apAuth;
-(void)didFailOfApAuth:(id)apAuth withErrCode:(int)errCode;
-(void)didSuccessOfApAuth:(id)apAuth;
-(void)didStartApAuth:(id)auth;
@end
