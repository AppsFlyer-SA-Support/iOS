//
//  AppDelegate.h
//  cuid_issue_objc
//
//  Created by Mark Serrano on 2020/02/26.
//  Copyright © 2020 Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AppsFlyerLib/AppsFlyerLib.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, AppsFlyerLibDelegate, AppsFlyerLibDelegate, AppsFlyerDeepLinkDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

