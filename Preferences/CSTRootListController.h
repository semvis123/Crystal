#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/CepheiPrefs.h>
#import <Cephei/HBPreferences.h>
#import <Cephei/HBRespringController.h>
#import "WelcomeViewController.h"

@interface CSTAppearanceSettings : HBAppearanceSettings
@end

@interface CSTRootListController : HBRootListController
@property(nonatomic, retain)CSTAppearanceSettings* appearanceSettings;
@property(nonatomic, retain)HBPreferences* preferences;
@property(nonatomic, retain)UISwitch* enableSwitch;
@property(nonatomic, retain)UIBarButtonItem* item;
@property(nonatomic, retain)UIView* headerView;
@property(nonatomic, retain)UIImageView* headerImageView;
@property(nonatomic, retain)UILabel* titleLabel;
@property(nonatomic, retain)UIImageView* iconView;
@property(nonatomic, retain)UIBlurEffect* blur;
@property(nonatomic, retain)UIVisualEffectView* blurView;
- (void)setEnabled;
- (void)setEnabledState;
- (void)resetPrompt;
- (void)resetPreferences;
- (void)respring;
@end